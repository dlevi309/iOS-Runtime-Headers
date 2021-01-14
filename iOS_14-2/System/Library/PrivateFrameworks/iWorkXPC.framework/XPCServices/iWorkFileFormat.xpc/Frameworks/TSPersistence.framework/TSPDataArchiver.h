/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class NSURL;


@protocol TSPDataArchiver <NSObject>
@property (nonatomic,readonly) NSURL * relativeURLForExternalData; 
@required
-(NSURL *)relativeURLForExternalData;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/id)arg1;

@end


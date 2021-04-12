/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSDictionary, NSString;

@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {

	NSDictionary* _frameHandleToForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrameHandleToFormsDictionary:(id)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPArchivableContent <NSObject>
@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (nonatomic,readonly) BOOL isDiff; 
@property (nonatomic,readonly) unsigned long long messageVersion; 
@property (nonatomic,readonly) const FieldPath* fieldPath; 
@required
-(BOOL)isDiff;
-(unsigned long long)messageVersion;
-(const FieldPath*)fieldPath;
-(BOOL)isContentUnknown;

@end


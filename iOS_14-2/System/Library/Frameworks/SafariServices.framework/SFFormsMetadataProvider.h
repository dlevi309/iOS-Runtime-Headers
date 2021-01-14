/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSDictionary, NSString;

@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider> {

	NSDictionary* _frameHandleToForms;

}

@property (nonatomic,readonly) unsigned long long formCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrameHandleToFormsDictionary:(id)arg1 ;
@end


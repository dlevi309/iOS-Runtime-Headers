/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {

	void* _attributes;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * prompt; 
@property (nonatomic,readonly) MRTextInputTraits traits; 
-(NSString *)title;
-(MRTextInputTraits)traits;
-(NSString *)prompt;
-(id)initWithAttributes:(void*)arg1 ;
@end


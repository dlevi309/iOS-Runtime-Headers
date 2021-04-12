/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding> {

	NSString* _localIdentifier;
	NSString* _localizedTitle;

}

@property (nonatomic,copy,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;               //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(NSString *)localIdentifier;
-(NSString *)localizedTitle;
-(id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2 ;
@end


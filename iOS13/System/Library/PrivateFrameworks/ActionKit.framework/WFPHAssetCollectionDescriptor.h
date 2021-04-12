/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)localizedTitle;
-(NSString *)localIdentifier;
-(id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2 ;
@end


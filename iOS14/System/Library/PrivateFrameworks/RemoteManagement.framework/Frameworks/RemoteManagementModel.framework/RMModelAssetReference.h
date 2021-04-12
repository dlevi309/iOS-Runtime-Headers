/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/


@class NSString, NSArray;

@interface RMModelAssetReference : NSObject {

	NSString* _identifier;
	NSArray* _assetTypes;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetTypes;               //@synthesize assetTypes=_assetTypes - In the implementation block
-(NSString *)identifier;
-(NSArray *)assetTypes;
-(id)initWithIdentifier:(id)arg1 assetTypes:(id)arg2 ;
@end


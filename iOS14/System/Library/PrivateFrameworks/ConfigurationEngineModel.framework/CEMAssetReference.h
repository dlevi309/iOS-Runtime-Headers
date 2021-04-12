/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/


@class NSString;

@interface CEMAssetReference : NSObject {

	int _assettype;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) int assettype;                           //@synthesize assettype=_assettype - In the implementation block
+(id)referenceForIdentifier:(id)arg1 assetschematype:(id)arg2 ;
+(id)referenceForIdentifier:(id)arg1 assettype:(int)arg2 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 assettype:(int)arg2 ;
-(int)assettype;
@end


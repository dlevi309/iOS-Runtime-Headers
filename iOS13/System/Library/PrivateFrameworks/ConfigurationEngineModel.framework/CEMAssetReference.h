/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


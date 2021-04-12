/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUIdentifiable.h>

@class NSString, NUIdentifier;

@interface NUSource : NSObject <NUIdentifiable> {

	NSString* _assetIdentifier;

}

@property (nonatomic,copy) NSString * assetIdentifier;                 //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NUIdentifier * identifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUIdentifier *)identifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(BOOL)isEqualToSource:(id)arg1 ;
-(id)sourceDefinition:(out id*)arg1 ;
@end


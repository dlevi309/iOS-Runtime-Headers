/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUIdentifiable.h>

@class NSString, NUIdentifier;

@interface NUSource : NSObject <NUIdentifiable> {

	NSString* _assetIdentifier;

}

@property (nonatomic,copy) NSString * assetIdentifier;                 //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) NUIdentifier * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isEqualToSource:(id)arg1 ;
-(unsigned long long)hash;
-(NUIdentifier *)identifier;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)sourceDefinition:(out id*)arg1 ;
@end


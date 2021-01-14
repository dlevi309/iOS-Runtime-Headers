/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, APContentDepiction, NSArray, NSDictionary;

@interface APContext : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _requestedAdIdentifier;
	APContentDepiction* _current;
	NSArray* _adjacent;
	NSDictionary* _supplementalContext;
	SCD_Struct_AP2 _maxSize;

}

@property (retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign) SCD_Struct_AP2 maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
@property (retain) NSString * requestedAdIdentifier;                //@synthesize requestedAdIdentifier=_requestedAdIdentifier - In the implementation block
@property (retain) APContentDepiction * current;                    //@synthesize current=_current - In the implementation block
@property (retain) NSArray * adjacent;                              //@synthesize adjacent=_adjacent - In the implementation block
@property (retain) NSDictionary * supplementalContext;              //@synthesize supplementalContext=_supplementalContext - In the implementation block
@property (readonly) NSString * fingerprint; 
+(BOOL)supportsSecureCoding;
-(void)setMaxSize:(SCD_Struct_AP2)arg1 ;
-(NSString *)fingerprint;
-(void)encodeWithCoder:(id)arg1 ;
-(APContentDepiction *)current;
-(SCD_Struct_AP2)maxSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)adjacent;
-(void)setCurrent:(APContentDepiction *)arg1 ;
-(NSString *)requestedAdIdentifier;
-(NSDictionary *)supplementalContext;
-(id)initWithIdentifier:(id)arg1 maxSize:(SCD_Struct_AP2)arg2 requestedAdIdentifier:(id)arg3 currentContent:(id)arg4 adjacentContent:(id)arg5 supplementalContext:(id)arg6 ;
-(void)setRequestedAdIdentifier:(NSString *)arg1 ;
-(void)setAdjacent:(NSArray *)arg1 ;
-(void)setSupplementalContext:(NSDictionary *)arg1 ;
@end


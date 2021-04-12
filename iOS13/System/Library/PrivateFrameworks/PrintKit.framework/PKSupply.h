/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSArray;

@interface PKSupply : NSObject {

	int _level;
	int _lowLevel;
	int _highLevel;
	NSString* _name;
	NSString* _markerType;
	NSArray* _colors;
	unsigned long long _supplyType;

}

@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * markerType;                      //@synthesize markerType=_markerType - In the implementation block
@property (nonatomic,retain) NSArray * colors;                           //@synthesize colors=_colors - In the implementation block
@property (assign,nonatomic) int level;                                  //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) int lowLevel;                               //@synthesize lowLevel=_lowLevel - In the implementation block
@property (assign,nonatomic) int highLevel;                              //@synthesize highLevel=_highLevel - In the implementation block
@property (assign,nonatomic) unsigned long long supplyType;              //@synthesize supplyType=_supplyType - In the implementation block
+(id)suppliesForIPPResponse:(ipp_sRef)arg1 ;
+(const char**)requiredIPPAttributes;
+(unsigned long long)numRequiredIPPAttributes;
+(BOOL)isValidColorString:(const char*)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)level;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLevel:(int)arg1 ;
-(NSArray *)colors;
-(NSString *)markerType;
-(unsigned long long)supplyType;
-(int)lowLevel;
-(int)highLevel;
-(id)initWithName:(const char*)arg1 markerType:(const char*)arg2 colors:(const char*)arg3 level:(int)arg4 lowLevel:(int)arg5 highLevel:(int)arg6 ;
-(void)setMarkerType:(NSString *)arg1 ;
-(void)setLowLevel:(int)arg1 ;
-(void)setHighLevel:(int)arg1 ;
-(void)setSupplyType:(unsigned long long)arg1 ;
@end


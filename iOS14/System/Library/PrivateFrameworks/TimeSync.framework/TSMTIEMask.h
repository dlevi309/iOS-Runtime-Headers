/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray, NSString;

@interface TSMTIEMask : NSObject {

	NSArray* _elements;
	NSString* _name;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)gPTP7Hop;
+(id)gPTP1Hop;
+(id)UDPHardwareMask;
+(id)UDPSoftwareMask;
+(id)gPTPMask1;
+(id)gPTPMask2;
+(id)gPTPMask3;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)mtieConformsToMask:(id)arg1 withErrors:(id*)arg2 ;
-(id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3 ;
@end


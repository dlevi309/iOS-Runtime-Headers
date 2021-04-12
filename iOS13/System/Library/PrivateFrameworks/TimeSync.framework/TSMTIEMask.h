/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray, NSString;

@interface TSMTIEMask : NSObject {

	NSArray* _elements;
	NSString* _name;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)UDPHardwareMask;
+(id)UDPSoftwareMask;
+(id)gPTPMask1;
+(id)gPTPMask2;
+(id)gPTPMask3;
+(id)gPTP7Hop;
+(id)gPTP1Hop;
-(void)dealloc;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
-(BOOL)mtieConformsToMask:(id)arg1 withErrors:(id*)arg2 ;
-(id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3 ;
@end


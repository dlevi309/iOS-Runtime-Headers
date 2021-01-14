/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)handlePowerNotOn;
-(id)description;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
-(void)dealloc;
@end


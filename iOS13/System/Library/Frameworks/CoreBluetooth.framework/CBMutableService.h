/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSNumber *)ID;
-(void)handlePowerNotOn;
-(void)setID:(NSNumber *)arg1 ;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
@end


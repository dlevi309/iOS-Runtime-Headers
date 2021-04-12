/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	BOOL inputAvailable;
	BOOL outputAvailable;
	BOOL online;
	BOOL available;
	BOOL changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) BOOL inputAvailable; 
@property (assign) BOOL outputAvailable; 
@property (getter=isOnline) BOOL online; 
@property (getter=isChangingState) BOOL changingState; 
@property (getter=isAvailable) BOOL available; 
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uuid;
-(BOOL)disconnect;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)connect;
-(BOOL)hidden;
-(BOOL)canConnect;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(BOOL)isChangingState;
-(CBPeripheral *)peripheral;
-(BOOL)outputAvailable;
-(BOOL)isOnline;
-(BOOL)inputAvailable;
-(void)setChangingState:(BOOL)arg1 ;
-(void)setOnline:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(BOOL)arg1 ;
-(void)setOutputAvailable:(BOOL)arg1 ;
-(BOOL)updateAvailableStateChanged;
@end


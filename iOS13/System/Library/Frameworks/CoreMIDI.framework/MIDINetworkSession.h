/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


@class NSString;

@interface MIDINetworkSession : NSObject {

	void* _imp;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) unsigned long long networkPort; 
@property (nonatomic,readonly) NSString * networkName; 
@property (nonatomic,readonly) NSString * localName; 
@property (assign,nonatomic) unsigned long long connectionPolicy; 
+(id)defaultSession;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)contacts;
-(id)connections;
-(NSString *)localName;
-(BOOL)addConnection:(id)arg1 ;
-(BOOL)removeConnection:(id)arg1 ;
-(NSString *)networkName;
-(BOOL)addContact:(id)arg1 ;
-(void)setConnectionPolicy:(unsigned long long)arg1 ;
-(unsigned long long)connectionPolicy;
-(void)sessionChanged;
-(BOOL)removeContact:(id)arg1 ;
-(void)setStateToEntity;
-(void)updateFromEntity;
-(void)refreshBonjourName;
-(BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2 ;
-(unsigned long long)networkPort;
-(void)contactsChanged;
-(unsigned)sourceEndpoint;
-(unsigned)destinationEndpoint;
@end


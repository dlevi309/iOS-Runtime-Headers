/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)networkName;
-(id)contacts;
-(void)setConnectionPolicy:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)connectionPolicy;
-(id)connections;
-(BOOL)removeConnection:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)localName;
-(BOOL)addContact:(id)arg1 ;
-(BOOL)addConnection:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)removeContact:(id)arg1 ;
-(void)dealloc;
-(void)sessionChanged;
-(void)updateFromEntity;
-(void)setStateToEntity;
-(void)refreshBonjourName;
-(unsigned long long)networkPort;
-(BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2 ;
-(void)contactsChanged;
-(unsigned)sourceEndpoint;
-(unsigned)destinationEndpoint;
@end


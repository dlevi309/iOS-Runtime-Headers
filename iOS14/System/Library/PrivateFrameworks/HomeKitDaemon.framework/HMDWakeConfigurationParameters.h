/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _delimiter;
	NSData* _primaryIdentifier;
	NSMutableArray* _secondaryIdentifier;

}

@property (nonatomic,retain) NSData * delimiter;                                //@synthesize delimiter=_delimiter - In the implementation block
@property (nonatomic,retain) NSData * primaryIdentifier;                        //@synthesize primaryIdentifier=_primaryIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(NSData *)primaryIdentifier;
-(NSData *)delimiter;
-(void)setDelimiter:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)secondaryIdentifier;
-(void)setSecondaryIdentifier:(NSMutableArray *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setPrimaryIdentifier:(NSData *)arg1 ;
-(id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 ;
@end


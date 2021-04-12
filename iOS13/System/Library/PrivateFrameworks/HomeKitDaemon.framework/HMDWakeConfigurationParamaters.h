/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParamaters : NSObject <NSCopying, HMDTLVProtocol> {

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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)primaryIdentifier;
-(NSMutableArray *)secondaryIdentifier;
-(void)setSecondaryIdentifier:(NSMutableArray *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setDelimiter:(NSData *)arg1 ;
-(void)setPrimaryIdentifier:(NSData *)arg1 ;
-(NSData *)delimiter;
-(id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 ;
@end


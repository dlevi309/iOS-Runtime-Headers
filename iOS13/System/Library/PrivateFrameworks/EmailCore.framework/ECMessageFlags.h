/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECMessageFlagsBuilder.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable> {

	ECMessageFlagsHashedBitField _storage;

}

@property (assign,nonatomic) BOOL read; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL replied; 
@property (assign,nonatomic) BOOL flagged; 
@property (assign,nonatomic) BOOL draft; 
@property (assign,nonatomic) BOOL forwarded; 
@property (assign,nonatomic) BOOL redirected; 
@property (assign,nonatomic) BOOL junkLevelSetByUser; 
@property (assign,nonatomic) unsigned long long junkLevel; 
@property (assign,nonatomic) unsigned long long flagColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)cachedFlagsWithHash:(unsigned long long)arg1 generator:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)deleted;
-(BOOL)redirected;
-(void)setRedirected:(BOOL)arg1 ;
-(id)initWithHash:(unsigned long long)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)read;
-(NSString *)ef_publicDescription;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)flagged;
-(void)setReplied:(BOOL)arg1 ;
-(void)setFlagColor:(unsigned long long)arg1 ;
-(void)setDraft:(BOOL)arg1 ;
-(void)setForwarded:(BOOL)arg1 ;
-(void)setJunkLevel:(unsigned long long)arg1 ;
-(BOOL)replied;
-(unsigned long long)flagColor;
-(BOOL)draft;
-(BOOL)forwarded;
-(unsigned long long)junkLevel;
-(BOOL)junkLevelSetByUser;
-(void)setJunkLevelSetByUser:(BOOL)arg1 ;
-(id)_flagColorDebugDescription;
-(id)_junkLevelDebugDescription;
@end


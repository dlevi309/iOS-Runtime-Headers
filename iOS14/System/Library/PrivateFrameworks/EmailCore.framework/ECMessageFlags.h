/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cachedFlagsWithHash:(unsigned long long)arg1 generator:(/*^block*/id)arg2 ;
-(BOOL)draft;
-(id)init;
-(NSString *)ef_publicDescription;
-(BOOL)flagged;
-(void)setFlagged:(BOOL)arg1 ;
-(BOOL)read;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)deleted;
-(void)setDraft:(BOOL)arg1 ;
-(BOOL)replied;
-(unsigned long long)flagColor;
-(id)initWithHash:(unsigned long long)arg1 ;
-(NSString *)description;
-(BOOL)forwarded;
-(BOOL)redirected;
-(void)setReplied:(BOOL)arg1 ;
-(void)setFlagColor:(unsigned long long)arg1 ;
-(void)setForwarded:(BOOL)arg1 ;
-(void)setRedirected:(BOOL)arg1 ;
-(void)setJunkLevel:(unsigned long long)arg1 ;
-(unsigned long long)junkLevel;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)junkLevelSetByUser;
-(void)setJunkLevelSetByUser:(BOOL)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_flagColorDebugDescription;
-(id)_junkLevelDebugDescription;
@end


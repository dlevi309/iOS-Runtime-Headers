/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMasterKeyIndex : NSObject <NSCopying> {

	unsigned char _MKI[16];
	unsigned _activeSize;
	BOOL _isMapped;
	unsigned char _mapKey;

}

@property (readonly) unsigned activeSize; 
@property (readonly) BOOL isMapped; 
@property (readonly) unsigned char mapKey; 
+(id)newMKIWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
+(id)makeInvalidKey;
-(const char*)MKI;
-(unsigned char)mapKey;
-(BOOL)isMapped;
-(id)description;
-(BOOL)isValid;
-(BOOL)setMapping:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)initWithNSUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithUUID:(unsigned char)arg1 ;
-(void)setMapKey:(unsigned char)arg1 ;
-(id)initWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
-(unsigned)activeSize;
-(void)setActiveSize:(unsigned)arg1 ;
-(void)fullKeyBytes:(unsigned char)arg1 ;
-(unsigned)mappedKeySize;
-(unsigned)mappedKeyBytes:(char*)arg1 size:(unsigned)arg2 ;
@end


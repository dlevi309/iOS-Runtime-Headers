/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)initWithUUID:(unsigned char)arg1 ;
-(BOOL)setMapping:(unsigned char)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(BOOL)isMapped;
-(void)setMapKey:(unsigned char)arg1 ;
-(id)initWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
-(unsigned char)mapKey;
-(unsigned)activeSize;
-(const char*)MKI;
-(void)setActiveSize:(unsigned)arg1 ;
-(void)fullKeyBytes:(unsigned char)arg1 ;
-(unsigned)mappedKeySize;
-(unsigned)mappedKeyBytes:(char*)arg1 size:(unsigned)arg2 ;
@end


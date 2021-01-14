/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDPropertyAddress : NSObject <NSCopying> {

	AudioObjectPropertyAddress _audioObjectPropertyAddress;

}

@property (nonatomic,readonly) unsigned selector; 
@property (nonatomic,readonly) unsigned scope; 
@property (nonatomic,readonly) unsigned element; 
@property (nonatomic,readonly) AudioObjectPropertyAddress audioObjectPropertyAddress;              //@synthesize audioObjectPropertyAddress=_audioObjectPropertyAddress - In the implementation block
-(unsigned)scope;
-(unsigned)selector;
-(id)initWithAddress:(AudioObjectPropertyAddress)arg1 ;
-(unsigned)element;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(AudioObjectPropertyAddress)audioObjectPropertyAddress;
-(id)initWithSelector:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end


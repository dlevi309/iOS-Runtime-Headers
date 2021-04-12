/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _BlastDoorLPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	NSString* _accessibilityText;

}

@property (assign,nonatomic) BOOL hasAudio;                           //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(void)setHasAudio:(BOOL)arg1 ;
-(NSString *)accessibilityText;
-(BOOL)hasAudio;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end


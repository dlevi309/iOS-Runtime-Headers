/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableString, NSArray, NSString;

@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	NSMutableArray* _segments;
	NSMutableString* _formattedText;
	unsigned _utteranceNumber;
	unsigned _updateNumber;
	BOOL _isLocal;
	BOOL _isFinal;

}

@property (assign,nonatomic) unsigned utteranceNumber;                //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (assign,nonatomic) unsigned updateNumber;                   //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) BOOL isFinal;                            //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,readonly) NSArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSString * formattedText; 
+(BOOL)supportsSecureCoding;
-(BOOL)isLocal;
-(NSString *)formattedText;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFinal;
-(void)addSegment:(id)arg1 ;
-(NSArray *)segments;
-(void)setIsFinal:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned)utteranceNumber;
-(void)setUtteranceNumber:(unsigned)arg1 ;
-(unsigned)updateNumber;
-(void)setUpdateNumber:(unsigned)arg1 ;
-(id)initWithUtteranceNumber:(unsigned)arg1 updateNumber:(unsigned)arg2 isLocal:(BOOL)arg3 isFinal:(BOOL)arg4 ;
@end


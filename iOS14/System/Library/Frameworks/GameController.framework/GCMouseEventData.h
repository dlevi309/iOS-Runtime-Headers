/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCMouseEventData : NSObject <NSSecureCoding> {

	unsigned short _source;
	unsigned _type;
	float _deltaX;
	float _deltaY;
	unsigned long long _buttonMask;
	unsigned long long _senderID;

}

@property (assign) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (assign) unsigned short source;                      //@synthesize source=_source - In the implementation block
@property (assign) float deltaX;                               //@synthesize deltaX=_deltaX - In the implementation block
@property (assign) float deltaY;                               //@synthesize deltaY=_deltaY - In the implementation block
@property (assign) unsigned long long buttonMask;              //@synthesize buttonMask=_buttonMask - In the implementation block
@property (assign) unsigned long long senderID;                //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)senderID;
-(float)deltaX;
-(float)deltaY;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(unsigned)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setSource:(unsigned short)arg1 ;
-(unsigned long long)buttonMask;
-(unsigned)type;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)source;
-(void)setDeltaX:(float)arg1 ;
-(void)setDeltaY:(float)arg1 ;
-(void)setButtonMask:(unsigned long long)arg1 ;
@end


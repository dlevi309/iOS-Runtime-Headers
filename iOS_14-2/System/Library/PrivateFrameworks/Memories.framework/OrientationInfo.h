/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/AltAspect.h>

@class NSString;

@interface OrientationInfo : NSObject <AltAspect> {

	BOOL _isRotated;
	unsigned _inputID;
	double _altAspect;

}

@property (assign,nonatomic) double altAspect;                      //@synthesize altAspect=_altAspect - In the implementation block
@property (assign,nonatomic) BOOL isRotated;                        //@synthesize isRotated=_isRotated - In the implementation block
@property (assign,nonatomic) unsigned inputID;                      //@synthesize inputID=_inputID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputID:(unsigned)arg1 ;
-(BOOL)isRotated;
-(unsigned)inputID;
-(NSString *)description;
-(void)setIsRotated:(BOOL)arg1 ;
-(double)altAspect;
-(void)setAltAspect:(double)arg1 ;
@end


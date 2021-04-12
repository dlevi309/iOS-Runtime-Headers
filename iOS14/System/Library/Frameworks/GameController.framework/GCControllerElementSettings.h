/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GCControllerElementSettings : NSObject <NSSecureCoding> {

	BOOL _invertHorizontally;
	BOOL _invertVertically;
	BOOL _swapAxes;
	NSString* _mappingKey;
	/*^block*/id _changedHandler;

}

@property (getter=isCustomized,nonatomic,readonly) BOOL customized; 
@property (nonatomic,readonly) NSString * mappingKey;                            //@synthesize mappingKey=_mappingKey - In the implementation block
@property (nonatomic,copy) id changedHandler;                                    //@synthesize changedHandler=_changedHandler - In the implementation block
@property (assign,nonatomic) BOOL invertHorizontally;                            //@synthesize invertHorizontally=_invertHorizontally - In the implementation block
@property (assign,nonatomic) BOOL invertVertically;                              //@synthesize invertVertically=_invertVertically - In the implementation block
@property (assign,nonatomic) BOOL swapAxes;                                      //@synthesize swapAxes=_swapAxes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setDefaultValues;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDictionaryRepresentation:(id)arg1 ;
-(id)changedHandler;
-(void)setChangedHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithElementKey:(id)arg1 ;
-(NSString *)mappingKey;
-(BOOL)isCustomized;
-(void)setDictionaryRepresentation:(id)arg1 fromCoder:(BOOL)arg2 ;
-(void)setInvertVertically:(BOOL)arg1 ;
-(void)setInvertHorizontally:(BOOL)arg1 ;
-(void)setSwapAxes:(BOOL)arg1 ;
-(BOOL)invertHorizontally;
-(BOOL)invertVertically;
-(BOOL)swapAxes;
@end


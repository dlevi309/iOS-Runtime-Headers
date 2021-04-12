/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {

	unsigned long long _sourceCount;
	int* _matrix[41];

}

@property (nonatomic,readonly) unsigned long long sourceCount;              //@synthesize sourceCount=_sourceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)sourceCount;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
-(void)setPass:(BOOL)arg1 element:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3 ;
-(BOOL)shouldPassElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2 ;
-(void)enumeratePassedElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCJSONRepresentable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GCHapticActuator : NSObject <NSSecureCoding, GCJSONRepresentable, NSCopying> {

	NSString* _label;
	long long _type;
	unsigned long long _index;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithJSONDictionaryRepresentation:(id)arg1 ;
-(id)initWithLabel:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
@end


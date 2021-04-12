/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSSecureCoding> {

	NSDictionary* _actionTableDictionary;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain,readonly) NSDictionary * actionTableDictionary;              //@synthesize actionTableDictionary=_actionTableDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _info;                                //@synthesize _info=__info - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionTableWithContentsOfDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(NSMutableDictionary *)_info;
-(id)actionForName:(id)arg1 ;
-(NSDictionary *)actionTableDictionary;
-(BOOL)isEqualToActionTable:(id)arg1 ;
@end


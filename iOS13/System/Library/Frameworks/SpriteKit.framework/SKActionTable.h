/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableDictionary *)_info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(id)actionForName:(id)arg1 ;
-(NSDictionary *)actionTableDictionary;
-(BOOL)isEqualToActionTable:(id)arg1 ;
@end


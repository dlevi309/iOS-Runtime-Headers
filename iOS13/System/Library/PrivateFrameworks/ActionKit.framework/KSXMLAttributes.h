/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface KSXMLAttributes : NSObject <NSCopying> {

	NSMutableArray* _attributes;

}

@property (nonatomic,copy) NSDictionary * attributesAsDictionary; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)close;
-(BOOL)hasAttributes;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
-(void)writeAttributes:(id)arg1 ;
-(id)initWithXMLAttributes:(id)arg1 ;
-(NSDictionary *)attributesAsDictionary;
-(void)setAttributesAsDictionary:(NSDictionary *)arg1 ;
@end


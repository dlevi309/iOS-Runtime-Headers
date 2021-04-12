/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasAttributes;
-(void)close;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
-(void)writeAttributes:(id)arg1 ;
-(id)initWithXMLAttributes:(id)arg1 ;
-(NSDictionary *)attributesAsDictionary;
-(void)setAttributesAsDictionary:(NSDictionary *)arg1 ;
@end


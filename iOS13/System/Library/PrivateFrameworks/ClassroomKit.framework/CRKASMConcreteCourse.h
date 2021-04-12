/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMCourse.h>

@class DMFControlGroupIdentifier, NSString;

@interface CRKASMConcreteCourse : NSObject <CRKASMCourse> {

	DMFControlGroupIdentifier* _identifier;
	NSString* _name;
	unsigned long long _color;
	unsigned long long _mascot;

}

@property (nonatomic,copy,readonly) DMFControlGroupIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long mascot;                                //@synthesize mascot=_mascot - In the implementation block
@property (nonatomic,readonly) unsigned long long color;                                 //@synthesize color=_color - In the implementation block
+(unsigned long long)classColorFromClassName:(id)arg1 ;
+(id)classThemeColors;
+(unsigned long long)asmHash:(unsigned long long)arg1 forString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(DMFControlGroupIdentifier *)identifier;
-(unsigned long long)color;
-(id)initWithClass:(id)arg1 ;
-(unsigned long long)mascot;
-(id)initWithName:(id)arg1 identifier:(id)arg2 ;
@end


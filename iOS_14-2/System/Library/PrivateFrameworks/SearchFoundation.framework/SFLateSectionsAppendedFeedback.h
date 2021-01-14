/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SFLateSectionsAppendedFeedback : SFFeedback <NSCopying> {

	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLSActivityReportItem : CLSReportItem <NSSecureCoding, NSCopying> {

	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end


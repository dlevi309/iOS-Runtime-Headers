/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFSportsTeam.h>
@class SFImage, NSString, NSDictionary, NSData;


@protocol SFSportsTeam <NSObject>
@property (nonatomic,retain) SFImage * logo; 
@property (nonatomic,copy) NSString * record; 
@property (nonatomic,copy) NSString * score; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)score;
-(void)setScore:(id)arg1;
-(NSString *)record;
-(void)setRecord:(id)arg1;
-(SFImage *)logo;
-(void)setLogo:(id)arg1;
-(NSData *)jsonData;
-(void)setAccessibilityDescription:(id)arg1;
-(NSString *)accessibilityDescription;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSString, NSDictionary, NSData;

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying> {

	SFImage* _logo;
	NSString* _record;
	NSString* _score;
	NSString* _accessibilityDescription;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFImage * logo;                                         //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * record;                                        //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * score;                                         //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;                      //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)score;
-(void)setScore:(NSString *)arg1 ;
-(NSString *)record;
-(void)setRecord:(NSString *)arg1 ;
-(SFImage *)logo;
-(void)setLogo:(SFImage *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)accessibilityDescription;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPContactEntity, NSString, UIImage, NSArray;

@interface CPContact : NSObject <NSSecureCoding> {

	CPContactEntity* _contactEntity;

}

@property (nonatomic,retain) CPContactEntity * contactEntity;              //@synthesize contactEntity=_contactEntity - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * informativeText; 
+(BOOL)supportsSecureCoding;
-(void)setActions:(NSArray *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSArray *)actions;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(CPContactEntity *)contactEntity;
-(id)initWithName:(id)arg1 image:(id)arg2 ;
-(void)setContactEntity:(CPContactEntity *)arg1 ;
@end


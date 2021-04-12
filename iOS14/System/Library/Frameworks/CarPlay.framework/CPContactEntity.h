/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPEntity.h>
#import <libobjc.A.dylib/CPContactProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CPImageSet, NSArray;

@interface CPContactEntity : CPEntity <CPContactProviding, NSSecureCoding> {

	NSString* _name;
	CPImageSet* _imageSet;
	NSArray* _actionButtons;
	NSString* _subtitle;
	NSString* _informativeText;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CPImageSet * imageSet;                 //@synthesize imageSet=_imageSet - In the implementation block
@property (nonatomic,copy) NSArray * actionButtons;                 //@synthesize actionButtons=_actionButtons - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * informativeText;              //@synthesize informativeText=_informativeText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(void)setActionButtons:(NSArray *)arg1 ;
-(NSArray *)actionButtons;
-(id)objectForIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(id)initWithName:(id)arg1 imageSet:(id)arg2 ;
@end


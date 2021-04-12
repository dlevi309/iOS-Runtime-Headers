/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSMediaEntityTypeExport.h>

@class NSString;

@interface VUIJSMediaEntityType : IKJSObject <VUIJSMediaEntityTypeExport> {

	NSString* _subtype;
	NSString* _category;
	NSString* _collectionType;

}

@property (nonatomic,retain) NSString * subtype;                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,retain) NSString * category;                    //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
+(id)show;
+(id)movie;
+(id)season;
+(id)episode;
+(id)rental;
+(id)homeVideo;
-(id)description;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)subtype;
-(void)setSubtype:(NSString *)arg1 ;
-(NSString *)collectionType;
-(void)setCollectionType:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)initWithMediaEntitySubtype:(id)arg1 category:(id)arg2 collectionType:(id)arg3 appContext:(id)arg4 ;
@end


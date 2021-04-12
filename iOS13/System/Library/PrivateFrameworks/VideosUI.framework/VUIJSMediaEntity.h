/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSMediaEntityExport.h>

@class VUIJSMediaEntityType, NSString, MPMediaEntity;

@interface VUIJSMediaEntity : IKJSObject <VUIJSMediaEntityExport> {

	VUIJSMediaEntityType* _type;
	NSString* _identifier;
	MPMediaEntity* _mediaEntity;

}

@property (nonatomic,retain) VUIJSMediaEntityType * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) MPMediaEntity * mediaEntity;              //@synthesize mediaEntity=_mediaEntity - In the implementation block
+(id)_mediaEntityTypeForMPMediaEntity:(id)arg1 mediaCategory:(id)arg2 mediaCollectionType:(id)arg3 ;
+(id)_numberForString:(id)arg1 ;
+(id)_stringForNumber:(id)arg1 ;
+(BOOL)parseIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)description;
-(VUIJSMediaEntityType *)type;
-(void)setType:(VUIJSMediaEntityType *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(MPMediaEntity *)mediaEntity;
-(void)setMediaEntity:(MPMediaEntity *)arg1 ;
-(id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 mediaCategory:(id)arg3 mediaCollectionType:(id)arg4 ;
@end


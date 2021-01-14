/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOAnnotatedItemList.h>
@class NSString, GEOMapItemAttribution;


@protocol GEOAnnotatedItemList
@property (nonatomic,readonly) id<GEOPictureItemContainer> pictureItemContainer; 
@property (nonatomic,readonly) id<GEOTextItemContainer> textItemContainer; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) int annotatedItemStyle; 
@property (nonatomic,readonly) GEOMapItemAttribution * attribution; 
@required
-(id<GEOTextItemContainer>)textItemContainer;
-(int)annotatedItemStyle;
-(id<GEOPictureItemContainer>)pictureItemContainer;
-(GEOMapItemAttribution *)attribution;
-(NSString *)title;

@end


@protocol GEOPictureItemContainer, GEOTextItemContainer;
@class NSString, GEOMapItemAttribution;

@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList> {

	id<GEOPictureItemContainer> _pictureItemContainer;
	id<GEOTextItemContainer> _textItemContainer;
	NSString* _title;
	int _annotatedItemStyle;
	GEOMapItemAttribution* _attribution;

}

@property (nonatomic,readonly) id<GEOPictureItemContainer> pictureItemContainer;              //@synthesize pictureItemContainer=_pictureItemContainer - In the implementation block
@property (nonatomic,readonly) id<GEOTextItemContainer> textItemContainer;                    //@synthesize textItemContainer=_textItemContainer - In the implementation block
@property (nonatomic,readonly) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int annotatedItemStyle;                                        //@synthesize annotatedItemStyle=_annotatedItemStyle - In the implementation block
@property (nonatomic,readonly) GEOMapItemAttribution * attribution;                           //@synthesize attribution=_attribution - In the implementation block
-(id)init;
-(id<GEOTextItemContainer>)textItemContainer;
-(int)annotatedItemStyle;
-(id<GEOPictureItemContainer>)pictureItemContainer;
-(id)initWithPictureItemContainer:(id)arg1 textItemContainer:(id)arg2 title:(id)arg3 annotatedItemStyle:(int)arg4 attribution:(id)arg5 ;
-(id)initWithAnnotatedItemList:(id)arg1 attribution:(id)arg2 ;
-(GEOMapItemAttribution *)attribution;
-(NSString *)title;
@end


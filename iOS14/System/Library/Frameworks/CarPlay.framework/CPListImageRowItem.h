/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/CPListItemPrivate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPSelectableListItem.h>

@class NSString, NSArray, NSUUID, CPListTemplate;

@interface CPListImageRowItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem> {

	NSString* _text;
	id _userInfo;
	/*^block*/id _handler;
	/*^block*/id _listImageRowHandler;
	NSArray* _gridImagesSet;
	NSUUID* _identifier;
	CPListTemplate* _listTemplate;

}

@property (nonatomic,retain) NSArray * gridImagesSet;                           //@synthesize gridImagesSet=_gridImagesSet - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CPListTemplate * listTemplate;              //@synthesize listTemplate=_listTemplate - In the implementation block
@property (nonatomic,copy) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id userInfo;                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) id handler;                                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSArray * gridImages; 
@property (nonatomic,copy) id listImageRowHandler;                              //@synthesize listImageRowHandler=_listImageRowHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(CGSize)maximumImageSize;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)setHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)updateImages:(id)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)_setNeedsUpdate;
-(id)handler;
-(CPListTemplate *)listTemplate;
-(void)setListTemplate:(CPListTemplate *)arg1 ;
-(id)listImageRowHandler;
-(NSArray *)gridImagesSet;
-(id)initWithText:(id)arg1 images:(id)arg2 ;
-(NSArray *)gridImages;
-(void)setListImageRowHandler:(id)arg1 ;
-(void)setGridImagesSet:(NSArray *)arg1 ;
@end


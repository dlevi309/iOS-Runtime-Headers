/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXInboxPreviewItem.h>
#import <libobjc.A.dylib/PXInboxModel.h>

@class NSDate, NSString, NSArray;

@interface PXSampleInboxModel : NSObject <PXInboxPreviewItem, PXInboxModel> {

	BOOL _userIsSender;
	BOOL _seen;
	NSDate* _creationDate;
	long long _inboxModelType;
	NSString* _inboxModelTitle;
	unsigned long long _assetsCount;
	NSArray* _senderNames;
	NSArray* _assetsForOneUp;
	long long _type;

}

@property (nonatomic,retain) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * inboxModelTitle;                    //@synthesize inboxModelTitle=_inboxModelTitle - In the implementation block
@property (assign,nonatomic) unsigned long long assetsCount;              //@synthesize assetsCount=_assetsCount - In the implementation block
@property (nonatomic,copy) NSArray * senderNames;                         //@synthesize senderNames=_senderNames - In the implementation block
@property (assign,nonatomic) BOOL userIsSender;                           //@synthesize userIsSender=_userIsSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long inboxModelType;                  //@synthesize inboxModelType=_inboxModelType - In the implementation block
@property (assign,getter=isSeen,nonatomic) BOOL seen;                     //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp;                  //@synthesize assetsForOneUp=_assetsForOneUp - In the implementation block
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
+(id)oldDate;
-(unsigned long long)assetsCount;
-(long long)inboxModelType;
-(BOOL)isSeen;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSDate *)creationDate;
-(void)setSeen:(BOOL)arg1 ;
-(long long)type;
-(BOOL)userIsSender;
-(NSArray *)assetsForOneUp;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(NSArray *)leftPreviewItems;
-(void)setInboxModelTitle:(NSString *)arg1 ;
-(void)setAssetsCount:(unsigned long long)arg1 ;
-(void)setSenderNames:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIsSender:(BOOL)arg1 ;
@end


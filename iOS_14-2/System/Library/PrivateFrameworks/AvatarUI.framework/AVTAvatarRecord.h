/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/AVTAvatarRecord.h>
@class NSString;


@protocol AVTAvatarRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@required
-(BOOL)isEditable;
-(NSString *)identifier;

@end


@class NSString, NSData, NSDate;

@interface AVTAvatarRecord : NSObject <UIActivityItemSource, AVTAvatarRecordInternal, NSSecureCoding, NSCopying, AVTAvatarRecord> {

	NSString* _identifier;
	NSData* _avatarData;
	NSDate* _orderDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * avatarData;                            //@synthesize avatarData=_avatarData - In the implementation block
@property (nonatomic,readonly) NSDate * orderDate;                           //@synthesize orderDate=_orderDate - In the implementation block
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
+(BOOL)supportsSecureCoding;
+(BOOL)canLoadAvatarWithData:(id)arg1 ;
+(id)dataForNewRecord;
+(id)dataForNeutralRecord;
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
+(id)defaultAvatarRecord;
-(BOOL)isEditable;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)init;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(BOOL)isPuppet;
-(NSString *)description;
-(NSData *)avatarData;
-(NSDate *)orderDate;
-(id)initWithAvatarData:(id)arg1 orderDate:(id)arg2 ;
-(id)initWithAvatarData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAvatarData:(NSData *)arg1 ;
-(id)initWithAvatarData:(id)arg1 identifier:(id)arg2 orderDate:(id)arg3 ;
@end


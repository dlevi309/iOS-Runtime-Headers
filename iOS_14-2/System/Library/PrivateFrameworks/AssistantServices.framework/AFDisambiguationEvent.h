/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	long long _selectionType;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setSelectionType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)selectionType;
-(NSDate *)date;
@end


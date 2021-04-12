/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMNote, NSArray;

@interface EDAMNoteEmailParameters : FATObject {

	NSString* _guid;
	EDAMNote* _note;
	NSArray* _toAddresses;
	NSArray* _ccAddresses;
	NSString* _subject;
	NSString* _message;

}

@property (nonatomic,retain) NSString * guid;                    //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) EDAMNote * note;                    //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) NSArray * toAddresses;              //@synthesize toAddresses=_toAddresses - In the implementation block
@property (nonatomic,retain) NSArray * ccAddresses;              //@synthesize ccAddresses=_ccAddresses - In the implementation block
@property (nonatomic,retain) NSString * subject;                 //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * message;                 //@synthesize message=_message - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)message;
-(NSString *)guid;
-(void)setNote:(EDAMNote *)arg1 ;
-(EDAMNote *)note;
-(void)setGuid:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)toAddresses;
-(void)setToAddresses:(NSArray *)arg1 ;
-(NSArray *)ccAddresses;
-(void)setCcAddresses:(NSArray *)arg1 ;
@end


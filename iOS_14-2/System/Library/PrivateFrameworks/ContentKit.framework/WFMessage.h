/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSArray;

@interface WFMessage : NSObject <NSCopying, NSSecureCoding, WFNaming> {

	NSString* _content;
	NSString* _conversationID;
	NSArray* _recipientContactIDs;
	NSArray* _recipients;
	NSString* _senderContactID;
	NSArray* _senderHandles;

}

@property (nonatomic,copy,readonly) NSString * content;                         //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationID;                  //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientContactIDs;              //@synthesize recipientContactIDs=_recipientContactIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                       //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderContactID;                 //@synthesize senderContactID=_senderContactID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * senderHandles;                    //@synthesize senderHandles=_senderHandles - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(NSArray *)recipients;
-(NSString *)content;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)conversationID;
-(NSString *)wfName;
-(NSArray *)recipientContactIDs;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContent:(id)arg1 conversationID:(id)arg2 recipientContactIDs:(id)arg3 recipients:(id)arg4 senderContactID:(id)arg5 senderHandles:(id)arg6 ;
-(NSString *)senderContactID;
-(NSArray *)senderHandles;
@end


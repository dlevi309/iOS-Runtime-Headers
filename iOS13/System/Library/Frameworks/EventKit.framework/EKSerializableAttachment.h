/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKSerializableObject.h>

@class NSURL, NSString;

@interface EKSerializableAttachment : EKSerializableObject {

	NSURL* _urlOnDisk;
	NSString* _contentTypeFromServer;

}

@property (nonatomic,retain) NSURL * urlOnDisk;                             //@synthesize urlOnDisk=_urlOnDisk - In the implementation block
@property (nonatomic,retain) NSString * contentTypeFromServer;              //@synthesize contentTypeFromServer=_contentTypeFromServer - In the implementation block
+(id)classesForKey;
-(id)initWithAttachment:(id)arg1 ;
-(id)createAttachment;
-(NSURL *)urlOnDisk;
-(void)setUrlOnDisk:(NSURL *)arg1 ;
-(NSString *)contentTypeFromServer;
-(void)setContentTypeFromServer:(NSString *)arg1 ;
@end


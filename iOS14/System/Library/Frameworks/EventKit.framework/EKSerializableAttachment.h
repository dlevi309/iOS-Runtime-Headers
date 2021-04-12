/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)urlOnDisk;
-(void)setUrlOnDisk:(NSURL *)arg1 ;
-(id)createAttachment;
-(NSString *)contentTypeFromServer;
-(void)setContentTypeFromServer:(NSString *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
@end


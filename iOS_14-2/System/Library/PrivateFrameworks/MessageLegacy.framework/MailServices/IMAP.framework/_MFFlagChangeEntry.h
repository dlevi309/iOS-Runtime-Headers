/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSString, NSDictionary;

@interface _MFFlagChangeEntry : NSObject {

	NSString* path;
	unsigned uid;
	NSDictionary* changes;
	unsigned connectionTag;
	double commitTime;

}

@property (readonly) NSString * path; 
@property (readonly) unsigned uid; 
@property (readonly) NSDictionary * changes; 
@property (assign) double commitTime; 
@property (assign) unsigned connectionTag; 
-(NSDictionary *)changes;
-(unsigned)uid;
-(NSString *)path;
-(double)commitTime;
-(void)setCommitTime:(double)arg1 ;
-(id)initWithPath:(id)arg1 UID:(unsigned)arg2 changes:(id)arg3 ;
-(unsigned)connectionTag;
-(void)setConnectionTag:(unsigned)arg1 ;
@end


/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteResultSpec : FATObject {

	NSNumber* _includeContent;
	NSNumber* _includeResourcesData;
	NSNumber* _includeResourcesRecognition;
	NSNumber* _includeResourcesAlternateData;
	NSNumber* _includeSharedNotes;
	NSNumber* _includeNoteAppDataValues;
	NSNumber* _includeResourceAppDataValues;
	NSNumber* _includeAccountLimits;

}

@property (nonatomic,retain) NSNumber * includeContent;                             //@synthesize includeContent=_includeContent - In the implementation block
@property (nonatomic,retain) NSNumber * includeResourcesData;                       //@synthesize includeResourcesData=_includeResourcesData - In the implementation block
@property (nonatomic,retain) NSNumber * includeResourcesRecognition;                //@synthesize includeResourcesRecognition=_includeResourcesRecognition - In the implementation block
@property (nonatomic,retain) NSNumber * includeResourcesAlternateData;              //@synthesize includeResourcesAlternateData=_includeResourcesAlternateData - In the implementation block
@property (nonatomic,retain) NSNumber * includeSharedNotes;                         //@synthesize includeSharedNotes=_includeSharedNotes - In the implementation block
@property (nonatomic,retain) NSNumber * includeNoteAppDataValues;                   //@synthesize includeNoteAppDataValues=_includeNoteAppDataValues - In the implementation block
@property (nonatomic,retain) NSNumber * includeResourceAppDataValues;               //@synthesize includeResourceAppDataValues=_includeResourceAppDataValues - In the implementation block
@property (nonatomic,retain) NSNumber * includeAccountLimits;                       //@synthesize includeAccountLimits=_includeAccountLimits - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)includeSharedNotes;
-(void)setIncludeSharedNotes:(NSNumber *)arg1 ;
-(NSNumber *)includeContent;
-(void)setIncludeContent:(NSNumber *)arg1 ;
-(NSNumber *)includeResourcesData;
-(void)setIncludeResourcesData:(NSNumber *)arg1 ;
-(NSNumber *)includeResourcesRecognition;
-(void)setIncludeResourcesRecognition:(NSNumber *)arg1 ;
-(NSNumber *)includeResourcesAlternateData;
-(void)setIncludeResourcesAlternateData:(NSNumber *)arg1 ;
-(NSNumber *)includeNoteAppDataValues;
-(void)setIncludeNoteAppDataValues:(NSNumber *)arg1 ;
-(NSNumber *)includeResourceAppDataValues;
-(void)setIncludeResourceAppDataValues:(NSNumber *)arg1 ;
-(NSNumber *)includeAccountLimits;
-(void)setIncludeAccountLimits:(NSNumber *)arg1 ;
@end


/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

@class NSSet;


@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>
@property (nonatomic,readonly) NSSet * missingURLs; 
@property (nonatomic,readonly) NSSet * deletedURLs; 
@property (nonatomic,readonly) NSSet * parsedContents; 
@property (assign,nonatomic) BOOL shouldIgnoreResponseErrors; 
@required
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(BOOL)shouldIgnoreResponseErrors;
-(void)setShouldIgnoreResponseErrors:(BOOL)arg1;

@end


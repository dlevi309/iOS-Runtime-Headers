/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSSet;


@protocol ECIMAPServerMessageBuilder <ECBaseServerMessageBuilderProtocol>
@property (assign,nonatomic) unsigned imapUID; 
@property (nonatomic,copy) NSSet * labels; 
@required
-(void)setLabels:(id)arg1;
-(NSSet *)labels;
-(unsigned)imapUID;
-(void)setImapUID:(unsigned)arg1;

@end

